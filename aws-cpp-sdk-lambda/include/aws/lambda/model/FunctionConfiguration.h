/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/Runtime.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{
  /*
    <p>A complex type that describes function metadata.</p>
  */
  class AWS_LAMBDA_API FunctionConfiguration
  {
  public:
    FunctionConfiguration();
    FunctionConfiguration(const Aws::Utils::Json::JsonValue& jsonValue);
    FunctionConfiguration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     <p>The name of the function.</p>
    */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }
    /*
     <p>The name of the function.</p>
    */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /*
     <p>The name of the function.</p>
    */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /*
     <p>The name of the function.</p>
    */
    inline FunctionConfiguration&  WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /*
     <p>The name of the function.</p>
    */
    inline FunctionConfiguration& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) assigned to the function.</p>
    */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }
    /*
     <p>The Amazon Resource Name (ARN) assigned to the function.</p>
    */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArnHasBeenSet = true; m_functionArn = value; }

    /*
     <p>The Amazon Resource Name (ARN) assigned to the function.</p>
    */
    inline void SetFunctionArn(const char* value) { m_functionArnHasBeenSet = true; m_functionArn.assign(value); }

    /*
     <p>The Amazon Resource Name (ARN) assigned to the function.</p>
    */
    inline FunctionConfiguration&  WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) assigned to the function.</p>
    */
    inline FunctionConfiguration& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}

    /*
     <p>The runtime environment for the Lambda function.</p>
    */
    inline const Runtime& GetRuntime() const{ return m_runtime; }
    /*
     <p>The runtime environment for the Lambda function.</p>
    */
    inline void SetRuntime(const Runtime& value) { m_runtimeHasBeenSet = true; m_runtime = value; }

    /*
     <p>The runtime environment for the Lambda function.</p>
    */
    inline FunctionConfiguration&  WithRuntime(const Runtime& value) { SetRuntime(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the IAM role that Lambda assumes when it executes your function to access any other Amazon Web Services (AWS) resources. </p>
    */
    inline const Aws::String& GetRole() const{ return m_role; }
    /*
     <p>The Amazon Resource Name (ARN) of the IAM role that Lambda assumes when it executes your function to access any other Amazon Web Services (AWS) resources. </p>
    */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /*
     <p>The Amazon Resource Name (ARN) of the IAM role that Lambda assumes when it executes your function to access any other Amazon Web Services (AWS) resources. </p>
    */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /*
     <p>The Amazon Resource Name (ARN) of the IAM role that Lambda assumes when it executes your function to access any other Amazon Web Services (AWS) resources. </p>
    */
    inline FunctionConfiguration&  WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the IAM role that Lambda assumes when it executes your function to access any other Amazon Web Services (AWS) resources. </p>
    */
    inline FunctionConfiguration& WithRole(const char* value) { SetRole(value); return *this;}

    /*
     <p>The function Lambda calls to begin executing your function.</p>
    */
    inline const Aws::String& GetHandler() const{ return m_handler; }
    /*
     <p>The function Lambda calls to begin executing your function.</p>
    */
    inline void SetHandler(const Aws::String& value) { m_handlerHasBeenSet = true; m_handler = value; }

    /*
     <p>The function Lambda calls to begin executing your function.</p>
    */
    inline void SetHandler(const char* value) { m_handlerHasBeenSet = true; m_handler.assign(value); }

    /*
     <p>The function Lambda calls to begin executing your function.</p>
    */
    inline FunctionConfiguration&  WithHandler(const Aws::String& value) { SetHandler(value); return *this;}

    /*
     <p>The function Lambda calls to begin executing your function.</p>
    */
    inline FunctionConfiguration& WithHandler(const char* value) { SetHandler(value); return *this;}

    /*
     <p>The size, in bytes, of the function .zip file you uploaded.</p>
    */
    inline long long GetCodeSize() const{ return m_codeSize; }
    /*
     <p>The size, in bytes, of the function .zip file you uploaded.</p>
    */
    inline void SetCodeSize(long long value) { m_codeSizeHasBeenSet = true; m_codeSize = value; }

    /*
     <p>The size, in bytes, of the function .zip file you uploaded.</p>
    */
    inline FunctionConfiguration&  WithCodeSize(long long value) { SetCodeSize(value); return *this;}

    /*
     <p>The user-provided description.</p>
    */
    inline const Aws::String& GetDescription() const{ return m_description; }
    /*
     <p>The user-provided description.</p>
    */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /*
     <p>The user-provided description.</p>
    */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /*
     <p>The user-provided description.</p>
    */
    inline FunctionConfiguration&  WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /*
     <p>The user-provided description.</p>
    */
    inline FunctionConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}

    /*
     <p>The function execution time at which Lambda should terminate the function. Because the execution time has cost implications, we recommend you set this value based on your expected execution time. The default is 3 seconds. </p>
    */
    inline long GetTimeout() const{ return m_timeout; }
    /*
     <p>The function execution time at which Lambda should terminate the function. Because the execution time has cost implications, we recommend you set this value based on your expected execution time. The default is 3 seconds. </p>
    */
    inline void SetTimeout(long value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /*
     <p>The function execution time at which Lambda should terminate the function. Because the execution time has cost implications, we recommend you set this value based on your expected execution time. The default is 3 seconds. </p>
    */
    inline FunctionConfiguration&  WithTimeout(long value) { SetTimeout(value); return *this;}

    /*
     <p>The memory size, in MB, you configured for the function. Must be a multiple of 64 MB.</p>
    */
    inline long GetMemorySize() const{ return m_memorySize; }
    /*
     <p>The memory size, in MB, you configured for the function. Must be a multiple of 64 MB.</p>
    */
    inline void SetMemorySize(long value) { m_memorySizeHasBeenSet = true; m_memorySize = value; }

    /*
     <p>The memory size, in MB, you configured for the function. Must be a multiple of 64 MB.</p>
    */
    inline FunctionConfiguration&  WithMemorySize(long value) { SetMemorySize(value); return *this;}

    /*
     <p>The timestamp of the last time you updated the function.</p>
    */
    inline const Aws::String& GetLastModified() const{ return m_lastModified; }
    /*
     <p>The timestamp of the last time you updated the function.</p>
    */
    inline void SetLastModified(const Aws::String& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    /*
     <p>The timestamp of the last time you updated the function.</p>
    */
    inline void SetLastModified(const char* value) { m_lastModifiedHasBeenSet = true; m_lastModified.assign(value); }

    /*
     <p>The timestamp of the last time you updated the function.</p>
    */
    inline FunctionConfiguration&  WithLastModified(const Aws::String& value) { SetLastModified(value); return *this;}

    /*
     <p>The timestamp of the last time you updated the function.</p>
    */
    inline FunctionConfiguration& WithLastModified(const char* value) { SetLastModified(value); return *this;}

  private:
    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;
    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet;
    Runtime m_runtime;
    bool m_runtimeHasBeenSet;
    Aws::String m_role;
    bool m_roleHasBeenSet;
    Aws::String m_handler;
    bool m_handlerHasBeenSet;
    long long m_codeSize;
    bool m_codeSizeHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    long m_timeout;
    bool m_timeoutHasBeenSet;
    long m_memorySize;
    bool m_memorySizeHasBeenSet;
    Aws::String m_lastModified;
    bool m_lastModifiedHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws